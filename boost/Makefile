
INCLUDE = -I/home/tzz/boost_1_56_0

LDFLAGS = -L/home/tzz/boost_1_56_0/lib \
		-lboost_system

sample : sample.o #-helloword 就是我们要生成的目标,sample.o是生成此目标的先决条件
	g++ $(INCLUDE) sample.o -o sample $(LDFLAGS)
sample.o : sample.cpp
	g++ $(INCLUDE) -c sample.cpp

clean :
	rm sample sample.o


#g++ sample.cpp -o sample
