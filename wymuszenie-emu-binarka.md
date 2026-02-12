# szkielet komendy dla oddzielenia alocatora systemu
# env LD_PRELOAD=./fix.so MALLOC_CHECK_=0 ./Linux/amd64/bin/emu -c1 -r $INFERNO_ROOT

# kompilacja pliku fix.c 
gcc -shared -fPIC -o fix.so fix.c
























## proba wpisania komendy w binarke emu ...



### proby/brudnopis


# zmiana systemowego wywolania free () na cos co istnieje w kompilatorze :D 

# edycja
emu/port/main.c
# zmiana w funkcji main na samym dole 
# oparte na ogarnianiu kodu alloc.c i probach juz w innych plikach 

// Zmieniamy nazwę na unikalną
void free_nothing(void *ptr) {
    // Puste celowo
}


