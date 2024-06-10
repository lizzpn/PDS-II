# Define o compilador g++ (utilizado para c++ ja instalado)
CXX = g++

# Define as flags de compilação (como o compilador vai agir dependendo do comando)
CXXFLAGS = -Wall -g

#Diretorio
SRC_DIRETOR = src
BUILD_DIRETOR = build
INCLUDE_DIRETOR = include

#arquivo de comando
#basicamente o arquivo compila os aquivos do src utilizando o main
SOURCE = $(wildcard $(SRC_DIRETOR)/entidades/*.cpp) $(SRC_DIRETOR)/main.cpp

#arquivo de objetos (define objetos e condicoes)
# aquivos de src mandando os arquivos .o para o build
OBJECTS = $(patsubst $(SRC_DIRETOR)/%.cpp, $(BUILD_DIRETOR)/%.o, $(SOURCE))

# Alvo final
TARGET = vpl_execution

# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Regras para compilar os arquivos .cpp em .o
$(BUILD_DIRETOR)/%.o: $(SRC_DIRETOR)/%.cpp
	mkdir -p $(BUILD_DIRETOR)/entidades
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados pela compilação
clean:
	rm -f $(BUILD_DIRETOR)/entidades/*.o $(TARGET)
