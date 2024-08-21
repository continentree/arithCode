SOURCES=
SOURCES+=fichier.c
SOURCES+=prog.c

OBJECTS+=$(patsubst %.c,build/%.o,$(SOURCES))
programme: $(OBJECTS) src/external/gmp-6.3.0/.libs/libgmp.a
    $(CC) $^ $(LDFLAGS) -I src/external/gmp-6.3.0/.libs -o programme

build:
    @mkdir -p build/external/C-Thread-Pool
build/%.o: src/%.c Makefile build
    $(CC) $(CFLAGS) -MMD -MP -c $< -o $@

src/external/gmp-6.3.0/.libs/libgmp.a:
    cd src/external && \
    rm -rf gmp-6.3.0 && \
    tar -xvf gmp-6.3.0.tar.xz
    cd src/external/gmp-6.3.0/ && \
    export CFLAGS="-O3 -march=native -mtune=native" && \
    ./configure --enable-static=yes --enable-shared=no --disable-cxx && \
    make
