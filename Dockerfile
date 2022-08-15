FROM archlinux:base-devel

# Updates
RUN pacman -Syyu --noconfirm 

# Install useful packages
RUN pacman -S zsh git go neofetch llvm clang valgrind bear python-pip --noconfirm

# Install norminette
RUN echo "PATH=$PATH:$HOME/.local/bin" >> ~/.zshrc && \
            pip install --upgrade pip && \
            pip install norminette

WORKDIR /root
