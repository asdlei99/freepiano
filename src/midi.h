#pragma once

struct midi_enum_callback {
  virtual void operator () (const char *value) = 0;
};

// open output device
int midi_open_output(const char *name);

// close output device
void midi_close_output();

// open input device
int midi_open_input(const char *name);

// close input device
void midi_close_input();

// send event
void midi_send_event(byte a, byte b, byte c, byte d);

// send event
void midi_output_event(byte a, byte b, byte c, byte d);

// enum input
void midi_enum_input(midi_enum_callback &callbcak);

// enum input
void midi_enum_output(midi_enum_callback &callbcak);

// rest midi
void midi_reset();