all:
	erb ruby_wrapper.rc > ruby_wrapper.c
	astyle ruby_wrapper.c
	erb stack_machine.rc > stack_machine.c
	astyle stack_machine.c
	erb stack_machine.rh > stack_machine.h
	astyle stack_machine.h
	erb representation.rc > representation.c
	astyle representation.c
	gcc stack_machine.c -fPIC  -fno-strict-aliasing -c -g -o stack_machine.o
	gcc memo.c -fPIC  -fno-strict-aliasing -c -g -o memo.o
	gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g -fPIC -c representation.c -o representation.o
	gcc -I. -I/usr/include/ruby-1.9.1/x86_64-linux -I/usr/include/ruby-1.9.1/ruby/backward -I/usr/include/ruby-1.9.1 -I. -fPIC -fno-strict-aliasing -g -g -fPIC -c ruby_wrapper.c -o ruby_wrapper.o
	gcc -shared -o RegReg.so representation.o stack_machine.o memo.o ruby_wrapper.o -L. -L/usr/lib -L. -rdynamic -Wl,-export-dynamic -lruby-1.9.1 -lpthread -lrt -ldl -lcrypt -lm -lc
