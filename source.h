#ifndef SOURCE_DOT_H  
#define SOURCE_DOT_H  

#define VGA_ADDRESS 0xB8000   

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;

enum {
		BLACK,
		BLUE,
		GREEN,
		CYAN,
		RED,
		MAGENTA,
		BROWN,
		GREY,
		DARK_GREY,
		BRIGHT_BLUE,
		BRIGHT_GREEN,
		BRIGHT_CYAN,
		BRIGHT_RED,
		BRIGHT_MAGENTA,
		YELLOW,
		WHITE,
};

unsigned short* terminal_buffer;
unsigned int vga_index;

void print_string(char* str, unsigned char color);
void print_char(char str, unsigned char color);
void clear_screen(void);

#endif 
