#ifndef SOURCE_DOT_H  
#define SOURCE_DOT_H  

#define VGA_ADDRESS 0xB8000   


#define BLACK 0
#define GREEN 2
#define RED 4
#define YELLOW 14
#define WHITE 15
#define PURPLE 35
#define MAGENTA 5


unsigned short* terminal_buffer;
unsigned int vga_index;

void print_string(char* str, unsigned char color);
void print_char(char str, unsigned char color);
void clear_screen(void);

#endif 
