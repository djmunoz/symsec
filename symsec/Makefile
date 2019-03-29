EXEC=symsec

CC=gcc
SRC_DIR=src
BUILD_DIR=src


INCLUDE_DIR=$(SRC_DIR)
GSL_INCLUDE_DIR=/usr/include/gsl
CFLAGS=-I$(INCLUDE_DIR) -I$(GSL_INCLUDE_DIR)

OBJECT_DIR=$(SRC_DIR)

LIBS=-lm -lgsl -lgslcblas

_DEPS = s.h
DEPS = $(patsubst %,$(INCLUDE_DIR)/%,$(_DEPS))

_OBJS = main.o symsec_advance_ivp.o
OBJS = $(patsubst %,$(OBJECT_DIR)/%,$(_OBJS))

$(OBJECT_DIR)/%.o: $(SRC_DIR)%.c $(DEPS)
		   $(CC) -c -o $@ $< $(CFLAGS)

$(EXEC): $(OBJS)
	$(CC) $^ $(CFLAGS) $(LIBS) -o $@ 


clean:
	rm -f $(OBJECT_DIR)/*.o $(EXEC) *~ core $(INCLUDE_DIR)/*~ 





 




















