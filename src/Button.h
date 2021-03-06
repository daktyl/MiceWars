#ifndef MICEWARS_BUTTON_H
#define MICEWARS_BUTTON_H

#include <utility>

#include "Object.h"

class Button : public Object {
public:
    bool state;
    int amount = 1;

    Button(int x, int y, int width, int height, std::string img_path, bool state = true)
            : Object(x, y, width, height, std::move(img_path)), state(state) { /* cout << "Button created!" << endl; */ }

    ~Button() override;

    explicit Button(bool state = false) : state(state) { }

    void click();

    void save(std::ofstream& file) override;

    void load(std::ifstream& file) override;

};


#endif //MICEWARS_BUTTON_H
