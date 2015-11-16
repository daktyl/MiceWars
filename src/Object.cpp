#include "Object.h"
#include "Engine.h"

void Object::display() {
    updateCenter();
    SDL_Rect clip;
    clip.x = 0;
    clip.y = 0;
    clip.w = obj_width;
    clip.h = obj_height;
    rectangle.x = pos_x; rectangle.y = pos_y;
    rectangle.w = obj_width; rectangle.h = obj_height;
    if (flip) {
        SDL_RenderCopyEx(Engine::Instance()->renderer, texture, NULL, &rectangle, angle, NULL, SDL_FLIP_HORIZONTAL);
    }
    else {
        SDL_RenderCopyEx(Engine::Instance()->renderer, texture, NULL, &rectangle, angle, NULL, SDL_FLIP_NONE);
    }
}

Object::Object(int x, int y, int width, int height, std::string img_path) {
    pos_x = x;
    pos_y = y;
    obj_width = width;
    obj_height = height;
    if (img_path != "") {
        texture = Engine::Instance()->makeTexture(img_path.c_str());
    }
    cout << "Object created!" << endl;
}

void Object::updateCenter() {
    center.x = pos_x + obj_width / 2;
    center.y = pos_y + obj_height / 2;
}

Object::~Object() {
    if (texture != nullptr) {
        SDL_DestroyTexture(texture);
    }
    cout << "Object destroyed!" << endl;
}


void Object::save(std::ofstream &file) {
    file.write((char*)&pos_x, sizeof(pos_x));
    file.write((char*)&pos_y, sizeof(pos_y));
    file.write((char*)&obj_width, sizeof(obj_width));
    file.write((char*)&obj_height, sizeof(obj_height));
    file.write((char*)&flip, sizeof(flip));
    file.write((char*)&angle, sizeof(angle));
}

void Object::load(std::ifstream &file) {
    file.read((char*)&pos_x, sizeof(pos_x));
    file.read((char*)&pos_y, sizeof(pos_y));
    file.read((char*)&obj_width, sizeof(obj_width));
    file.read((char*)&obj_height, sizeof(obj_height));
    file.read((char*)&flip, sizeof(flip));
    file.read((char*)&angle, sizeof(angle));
}
