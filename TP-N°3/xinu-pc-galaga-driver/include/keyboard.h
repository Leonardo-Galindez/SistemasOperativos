#define inportb(p)      inb(p)
#define outportb(p,v)   outb(p,v)

#define KEYBOARD_DATAREG 0x60  // :Data Register(Read\Write)
#define KEYBOARD_CMDREG 0x64   // :Command Register(Read\Write)


extern unsigned char kblayout [128];  // { ... } Fill your layout yourself 


#define BUFFER_SIZE 10

struct kbd_buffer{
	unsigned char array [BUFFER_SIZE];
	int frente;
	int fin;	
};