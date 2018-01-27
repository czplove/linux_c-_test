
INCLUDE = -I/home/tzz/boost_1_56_0

sample : sample.o #-helloword 就是我们要生成的目标,sample.o是生成此目标的先决条件
	g++ $(INCLUDE) -o sample sample.o
sample.o : sample.cpp
	g++ $(INCLUDE) -c sample.cpp

clean :
	rm sample sample.o


#g++ sample.cpp -o sample
