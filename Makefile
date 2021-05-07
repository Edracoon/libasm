NAME = libasm.a

SRCS = ft_strlen.s \
		ft_strcpy.s

OBJS = $(SRCS:.s=.o)

CMPL = nasm -fmacho64

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

.s.o:
	$(CMPL) -o $@ $?

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
	rm -rf a.out

re: clean all