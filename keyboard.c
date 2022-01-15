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



void set_key(char c, char *character)
{
  *character			=		c;
  clicked			=		1;
  canSend			=		1;
}



void keyboard_handler()
{
  unsigned char scancode;
  unsigned int shift_key	=		0;
  canSend			=		0;

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
	set_key	('a',			&character);
           
      }
      if	(scancode	==		0x30
		 &&
		 clicked	==		0) {
	set_key	('b',			&character);

      }
      if (scancode 		== 		0x2E
	  &&
	  clicked 		== 		0) {
	set_key	('c',			&character);
      }
      if (scancode 		== 		0x20
	  &&
	  clicked 		== 		0) {
	set_key	('d',			&character);
      }
      if (scancode 		== 		0x12
	  &&
	  clicked 		== 		0) {
	set_key	('e',			&character);
      }
      if (scancode 		== 		0x21
	  &&
	  clicked 		== 		0) {
	set_key	('f',			&character);
      }
      if (scancode 		== 		0x22
	  &&
	  clicked 		== 		0) {
	set_key	('g',			&character);
      }

      if (scancode 		== 		0x23
	  &&
	  clicked 		== 		0) {
	set_key	('h',			&character);
      }
      if (scancode 		== 		0x17
	  &&
	  clicked 		== 		0) {
	set_key	('i',			&character);
      }
      if (scancode 		== 		0x24
	  &&
	  clicked 		== 		0) {
	set_key	('j',			&character);
      }
      if (scancode 		== 		0x25
	  &&
	  clicked 		== 		0) {
	set_key	('k',			&character);
      }
      if (scancode 		== 		0x26
	  &&
	  clicked 		== 		0) {
	set_key	('l',			&character);
      }
      if (scancode 		== 		0x32
	  &&
	  clicked 		== 		0) {
	set_key	('m',			&character);
      }
      if (scancode 		== 		0x31
	  &&
	  clicked 		== 		0) {
	set_key	('n',			&character);
      }
      if (scancode 		== 		0x18
	  &&
	  clicked 		== 		0) {
	set_key	('o',			&character);
      }
      if (scancode 		== 		0x19
	  &&
	  clicked 		== 		0) {
	set_key	('p',			&character);
      }
      if (scancode 		== 		0x10
	  &&
	  clicked 		== 		0) {
	set_key	('q',			&character);
      }
      if (scancode 		== 		0x13
	  &&
	  clicked 		== 		0) {
	set_key	('r',			&character);
      }
      if (scancode 		== 		0x1F
	  &&
	  clicked 		== 		0) {
	set_key	('s',			&character);
      }
      if (scancode 		== 		0x14
	  &&
	  clicked 		== 		0) {
	set_key	('t',			&character);
      }
      if (scancode 		== 		0x16
	  &&
	  clicked 		== 		0) {
	set_key	('u',			&character);
      }
      if (scancode 		== 		0x2F
	  &&
	  clicked 		== 		0) {
	set_key	('v',			&character);
      }
      if (scancode 		== 		0x11
	  &&
	  clicked 		== 		0) {
	set_key	('w',			&character);
      }
      if (scancode 		== 		0x2D
	  &&
	  clicked 		== 		0) {
	set_key	('x',			&character);
      }
      if (scancode 		== 		0x15
	  &&
	  clicked 		== 		0) {
	set_key	('y',			&character);
      }
      if (scancode 		== 		0x2c
	  &&
	  clicked 		== 		0) {
	set_key	('z',			&character);
      }

      if (canSend 		== 		1) {
	vga_index 		+= 		10;
	print_char(character, RED);
      }
    }

}

