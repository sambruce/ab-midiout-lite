// To give your project a unique name, this code must be
// placed into a .c file (its own tab).  It can not be in
// a .cpp file or your main sketch (the .ino file).
#if defined (__MK20DX256__) || defined (__MK20DX128__) || defined (__MKL26Z64__)
#include "usb_names.h"

// Edit these lines to create your own name.  The length must
// match the number of characters in your custom name.

#define MIDI_NAME   {'T','e','e','n','s','y','b','o','y',' ','M','I','D','I',' ','o','u','t',' ','l','i','t','e'}
#define MIDI_NAME_LEN  23

// Do not change this part.  This exact format is required by USB.

struct usb_string_descriptor_struct usb_string_product_name = {
        2 + MIDI_NAME_LEN * 2,
        3,
        MIDI_NAME
};
#endif

