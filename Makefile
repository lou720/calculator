# Nome dell'eseguibile
TARGET = calcolatrice.out

# Cartella di build
BUILD_DIR = build

# Files sorgenti e files oggetto
SRC = src/main.cpp src/calculator.cpp
OBJ = $(patsubst src/%.cpp, $(BUILD_DIR)/%.o, $(SRC))

# Flags di compilazione
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Target di default
all: $(BUILD_DIR)/$(TARGET)

# Creazione dell'eseguibile nella cartella build
$(BUILD_DIR)/$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(BUILD_DIR)/$(TARGET)
	@echo "Eseguibile creato in: $(BUILD_DIR)/$(TARGET)"

# Compilazione dei singoli file oggetto
$(BUILD_DIR)/%.o: src/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Creazione della cartella build (dipendenza implicita)
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Pulizia del progetto
clean:
	rm -rf $(BUILD_DIR)
	@echo "Pulizia completata: $(BUILD_DIR) rimosso."

.PHONY: all clean
