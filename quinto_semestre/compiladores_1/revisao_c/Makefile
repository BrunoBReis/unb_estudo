# Nome do programa executável
TARGET = main

# Arquivos de cabeçalho (se houver)
HEADERS = main.h

# Arquivos objeto
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))

# Flags do compilador
CFLAGS = -Wall -O2

# Regra principal (default)
default: $(TARGET)

# Regra para compilar um arquivo objeto
%.o: %.c $(HEADERS)
    $(CC) $(CFLAGS) -c $< -o $@

# Regra para linkar o programa executável
$(TARGET): $(OBJECTS)
    $(CC) $(OBJECTS) -o $@

# Regra para limpar arquivos objeto e o executável
clean:
    -rm -f $(OBJECTS) $(TARGET)
