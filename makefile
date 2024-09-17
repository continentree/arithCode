prog : src/internal/main.o src/internal/lib.o src/internal/artCode.o
	gcc -o prog src/internal/main.o src/internal/lib.o src/internal/artCode.o

src/internal/main.o : src/internal/main.c
	gcc -o src/internal/main.o -c src/internal/main.c -W -Wall -Wextra -Wvla -O0 -fsanitize=address,undefined

src/internal/lib.o : src/internal/lib.c
	gcc -o src/internal/lib.o -c src/internal/lib.c -W -Wall -Wextra -Wvla -O0 -fsanitize=address,undefined

src/internal/artCode.o : src/internal/artCode.c
	gcc -o src/internal/artCode.o -c src/internal/artCode.c -W -Wall -Wextra -Wvla -O0 -fsanitize=address,undefined
