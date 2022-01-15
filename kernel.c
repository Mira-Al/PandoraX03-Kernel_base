#include "source.h"
#include "keyboard.h"



void wait_for_io(uint32 timer_count)
{
  while(1){
    asm volatile("nop");
    timer_count--;
    if(timer_count <= 0)
      break;
  }
}
void sleep(uint32 timer_count)
{
  wait_for_io(timer_count);
}

void main(void)
{

  terminal_buffer	=	(unsigned short *)	VGA_ADDRESS;
  vga_index		=				0;

  clear_screen();

  print_string			("Hello world!",        MAGENTA);
  vga_index		=				80;
  print_string			("Version 1",		MAGENTA);
  vga_index		=				160;

  print_string			("MyTest",		RED);
  vga_index		=				240;


  while (1) {
    keyboard_handler();
    sleep(0x02FFFFFF);
  }
  
  return;
}



