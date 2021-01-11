#
     
  
	# Universidad de La Laguna.
  
	# Escuela Superior de Ingeniería y Tecnología.
  
	# Grado en Ingeniería Informática.
  
	# Informática Básica.
  
  
	# @author José Luis Arribas Rodríguez <alu0101416700@ull.es>.
  
	# @date 11 de enero de 2021.
  
	# @brief A "Makefile", with the exercises related to this practice.
  
	
#



# The compiler command (C++).

CXX = g++


# Compiler Options (C ++); ((C ++ 14), keep debug symbols and warn everyone).

CXXFLAGS = -std=c++14 -g -Wall


# The linker options (if any).

LDFLAGS =




# The "all" target builds all the programs, handled by the makefile.



all: arithmetic_operators

arithmetic_operators: arithmetic_operators.o arithmetic_operators.o

#
  
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	
#


all: boolean_operators

boolean_operators: boolean_operators.o boolean_operators.o

#
  
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

#


all: data_types

data_types: data_types.o data_types.o

#
	
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

#


all: modification

modification: modification.o modification.o

#
  
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

#


all: references

references: references.o references.o

#
  
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

#



# Please note that all clean targets do not correspond to actual files.

.PHONY: all clean



# The following rule is effectively built into "make" and therefore does not need to be explicitly specified:


# arithmetic_operators.o: arithmetic_operators.cc

# boolean_operators.o: boolean_operators.cc

# data_types.o: data_types.cc

# modification.o: modification.cc

# references.o: references.cc


#
    
	$(CXX) $(CXXFLAGS) -c $<
	
#



# The "clean" target removes all executable files and object files, produced by the compilation process.

# We can use it, for additional cleaning purposes:


#
  
  
	rm -f arithmetic_operators *.o
  
	rm -rf *~ basura b i
	
	rm -rf a.out

	find . -name '*~' -exec rm {} \;

	find . -name basura -exec rm {} \;


#

#


	rm -f boolean_operators *.o

	rm -rf *~ basura b i

	rm -rf a.out

	find . -name '*~' -exec rm {} \;

	find . -name basura -exec rm {} \;


#

#


	rm -f data_types *.o

	rm -rf *~ basura b i

	rm -rf a.out

	find . -name '*~' -exec rm {} \;

	find . -name basura -exec rm {} \;


#

#


	rm -f modification *.o

	rm -rf *~ basura b i

	rm -rf a.out

	find . -name '*~' -exec rm {} \;

	find . -name basura -exec rm {} \;


#

#


	rm -f references *.o

	rm -rf *~ basura b i

	rm -rf a.out

	find . -name '*~' -exec rm {} \;

	find . -name basura -exec rm {} \;


#