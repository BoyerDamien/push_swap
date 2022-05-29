package testcase

import (
	"fmt"
	"os/exec"
	"strings"
	"time"
)

type TestCase struct {
	Command string
	Args    []string
}

func (t *TestCase) Run() string {
	cmd := exec.Command(t.Command, t.Args...)
	stdout, stderr := cmd.Output()
	if stderr != nil {
		panic(stderr)
	}
	return string(stdout)
}

func (t *TestCase) RunWithTimeout(timeout time.Duration) ([]string, error) {
	var (
		stdout = make(chan string)
	)
	go func() {
		stdout <- t.Run()
	}()
	select {
	case <-time.After(timeout):
		return []string{}, fmt.Errorf("timeout")
	case result := <-stdout:
		return strings.Split(result, "\n"), nil
	}
}

func New(cmd string, args []string) *TestCase {
	return &TestCase{
		Command: cmd,
		Args:    args,
	}
}
