#pragma once
struct KeyboardInput
{
  //keyboard
  bool esc, f1, f2, f3, f4, f5, f6, f7, f8, f9,
    f10, f11, f12;

  bool graveAccent, n1, n2, n3, n4, n5, n6, n7,
    n8, n9, n0, minus, equal, backspace;

  bool a, b, c, d, e, f, g, h, i, j, k, l, m,
    n, o, p, q, r, s, t, u, v, w, x, y, z;

  bool tab, leftShift, rightShift, leftControl,
    rightControl, leftAlt, rightAlt, spacebar;

  bool leftSquareBracket, rightSquareBracket;

  bool backslash, semiColon, apostrophe, enter;

  bool comma, period, forwardSlash;

  bool printScreen, scrollLock, pauseBreak, insert,
    del, home, end, pageUp, pageDown;

  bool upArrow, downArrow, leftArrow, rightArrow;

  bool menu, leftSuper, rightSuper;

  // todo 
  // bool keypad_keys;

  //mouse buttons
  bool mouseButton1, mouseButton2, mouseButton3,
    mouseButton4, mousebutton5, mouseButton6,
    mousebutton7, mouseButton8;

};

struct MouseInput
{
  float xOffset;
  float yOffset;
};