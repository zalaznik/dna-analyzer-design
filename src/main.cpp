

#include "start_app.h"
#include "reader/keyboard_reader.h"
#include "writer/screen_writer.h"

int main()
{
    KeyboardReader key_board_reader;
    ScreenWriter screen_writer;

    StartApp start_app;
    start_app.start(&key_board_reader, &screen_writer);

    return 0;
}