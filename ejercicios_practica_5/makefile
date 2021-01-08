# Universidad de La Laguna.

# Escuela Superior de Ingeniería y Tecnología.

# Grado en Ingeniería Informática.

# Informática Básica.


# @title Práctica 5: La Guía de Estilo de Google para (C++).

#                    La herramienta "make" para "makefile".

#                    Las referencias.

#                    Los tipos de datos.



# @file Makefile

# @author José Luis Arribas Rodríguez <alu0101416700>.

# @date 5 de enero de 2021.

# @brief Un fichero "Makefile", que permita compilar y generar, los programas ejecutables correspondientes a los 4 ejercicios de a "Práctica 5".




CXX = g++						             # The (C++) compiler command.

CXXFLAGS = -std=c++14 -g -Wall   # The C++ compiler options (C++14, preserve debug symbols and warn all)

LDFLAGS =						             # The linker options (if any)


# The all target builds all of the programs handled by the makefile.
all: arithmetic_operators

arithmetic_operators: arithmetic_operators.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# The all target builds all of the programs handled by the makefile
all: references
references: references.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
# The all target builds all of the programs handled by the makefile
all: data_types
data_types: data_types.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
# The all target builds all of the programs handled by the makefile
all: boolean_operators
boolean_operators: boolean_operators.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean

# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# hello_world.o: hello_world.cc
#
	$(CXX) $(CXXFLAGS) -c $<

# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
	rm -f hello_world *.o
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;
