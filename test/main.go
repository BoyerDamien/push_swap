package main

import (
	"fmt"
	"math/rand"
	"sort"
	"test-push-swap/testcase"
	"time"
)

func NewArgs(n, min int) []string {
	var (
		result = make([]string, 0)
	)

	for i := 0; i < n; i++ {
		result = append(result, fmt.Sprintf("%d", min+i))
	}
	rand.Seed(time.Now().UnixNano())
	rand.Shuffle(len(result), func(i, j int) { result[i], result[j] = result[j], result[i] })
	return result
}

type Criterion struct {
	NInstructions int
	Point         int
}

func Evaluate(response []string, criterion []Criterion) int {
	// sort by n instructions desc
	sort.SliceStable(criterion, func(i, j int) bool {
		return criterion[i].NInstructions < criterion[j].NInstructions
	})

	nInstructions := len(response)
	for _, crit := range criterion {
		if nInstructions <= crit.NInstructions {
			return crit.Point
		}
	}
	return 0
}

func main() {
	const (
		timeout = time.Second * 12
		cmd     = "../push_swap"
		min     = 0
	)
	var (
		evaluation = map[int][]Criterion{
			// 3: {{NInstructions: 3, Point: 1}},
			5: {{NInstructions: 12, Point: 1}},
			// 100: {
			// 	{NInstructions: 700, Point: 5},
			// 	{NInstructions: 900, Point: 4},
			// 	{NInstructions: 1100, Point: 3},
			// 	{NInstructions: 1300, Point: 2},
			// 	{NInstructions: 1500, Point: 1},
			// },
			// 500: {
			// 	{NInstructions: 5500, Point: 5},
			// 	{NInstructions: 7000, Point: 4},
			// 	{NInstructions: 8500, Point: 3},
			// 	{NInstructions: 10000, Point: 2},
			// 	{NInstructions: 11500, Point: 1},
			// },
		}
	)

	for key, value := range evaluation {
		args := NewArgs(key, min)
		testCase := testcase.New(cmd, args)
		result, err := testCase.RunWithTimeout(timeout)
		evaluation := Evaluate(result, value)
		if err != nil {
			panic(err)
		}
		fmt.Printf("Result = %d -- N = %d -- Point = %d\n", len(result), key, evaluation)
		if evaluation == 0 {
			fmt.Println(testCase)
		}
	}
}
