#include "keyboard.h"  
#include "source.h"
#include <sys/io.h>


int		clicked		=		0;
int		canSend		=		0;

unsigned char get_scancode()
{
  unsigned char inputdata;
  inputdata			=		inb(0x60);
  return	inputdata;
}



void set_key()
{
  clicked			=		1;
  canSend			=		1;
}



void keyboard_handler()
{

  unsigned char scancode;
  unsigned int shift_key	=		0;
  canSend			=		0;
  clicked			=		0;
  scancode			=		0;
  
  scancode			=		get_scancode();


  if	(scancode		==		0x2A)
    {
	shift_key		=		1;
	//Shift key is pressed
    }

  if	(scancode		&		0x80)
    {
      int shiftaltctrl		=		1;
      //Put anything to see what special keys were pressed
    }
  else
    {
      char character;
      if	(scancode	==		0x0F) {
	clicked			=		0;
	// tab, resets stuff
	clear_screen();
      }


      
      if	(scancode	==		0x01) {
	clicked			=		0;
      }

      if	(scancode	==		0x1E
		 &&
		 clicked	==		0) {
	set_key	();
	character			=		'a';
      }

      
      if	(scancode	==		0x30
		 &&
		 clicked	==		0) {
	set_key	();
	character			=		'b';
      }

      
      if (scancode 		== 		0x2E
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'c';
      }
      
      if (scancode 		== 		0x20
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'd';
      }
      if (scancode 		== 		0x12
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'e';
      }
      if (scancode 		== 		0x21
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'f';
      }
      if (scancode 		== 		0x22
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'g';
      }

      if (scancode 		== 		0x23
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'h';
      }

      if (scancode 		== 		0x17
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'i';
      }

      if (scancode 		== 		0x24
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'j';
      }

      if (scancode 		== 		0x25
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'k';
      }

      if (scancode 		== 		0x26
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'l';
      }

      if (scancode 		== 		0x32
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'm';
      }

      if (scancode 		== 		0x31
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'n';
      }

      if (scancode 		== 		0x18
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'o';
      }

      if (scancode 		== 		0x19
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'p';
      }

      if (scancode 		== 		0x10
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'q';
      }

      if (scancode 		== 		0x13
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'r';
      }

      if (scancode 		== 		0x1F
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		's';
      }

      if (scancode 		== 		0x14
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		't';
      }

      if (scancode 		== 		0x16
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'u';
      }
      
      if (scancode 		== 		0x2F
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'v';
      }
      if (scancode 		== 		0x11
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'w';
      }
      if (scancode 		== 		0x2D
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'x';
      }
      if (scancode 		== 		0x15
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'y';
      }
      if (scancode 		== 		0x2c
	  &&
	  clicked 		== 		0) {
	set_key	();
	character			=		'z';
      }

      if (canSend 		== 		1) {
	//	vga_index 		+= 		10;
	print_char(character, RED);
	canSend			=		0;
      }
    }
      
}

int a = 0;

void keyboard_handler_test()
{
  if (a < 20)
    {
      print_char('r', RED);
      a++;
    }
}
