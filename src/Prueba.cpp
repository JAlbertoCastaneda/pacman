#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0; 

    while (true)
    {
        auto can = Canvas(1000, 1000);

        can.DrawPointLine(40, 20, 60, 20);
        can.DrawPointLine(40, 20, 50, 50);  
        can.DrawPointLine(60, 20, 50, 50); 

        can.DrawPointLine(40, 80, 60, 80);  
        can.DrawPointLine(40, 80, 50, 50);  
        can.DrawPointLine(60, 80, 50, 50);

        if (frame < 5) {
            can.DrawPoint(50, 21, true);
            can.DrawPoint(49, 24, true);
            can.DrawPoint(51, 24, true);
        }
        if (frame < 10) {
            can.DrawPoint(48, 26, true);
            can.DrawPoint(52, 26, true);
        }
        if (frame < 15) {
            can.DrawPoint(50, 28, true);
        }

        if (frame >= 5) {
            can.DrawPoint(50, 78, true);
        }
        if (frame >= 10) {
            can.DrawPoint(49, 76, true);
            can.DrawPoint(51, 76, true);
        }
        if (frame >= 15) {
            can.DrawPoint(48, 74, true);
            can.DrawPoint(52, 74, true);
            can.DrawPoint(50, 74, true);
        }

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::White, canvas(&can));
        Render(pantalla, lienzo);

        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);

        frame++;
        if (frame > 15) { 
            frame = 0;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    return 0;
}








