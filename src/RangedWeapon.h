#ifndef MICEWARS_RANGEDWEAPON_H
#define MICEWARS_RANGEDWEAPON_H

#include "Weapon.h"

class RangedWeapon: public Weapon {
public:
    bool gravity;
    int weight;
    Object* bullet = nullptr;
    Object* crosshair = nullptr;
    bool bullet_fired = false;
    std::vector<std::pair<int, int>> semicircle_vector;
    std::vector<std::pair<int,int>>::iterator it;
    float a_coefficient;
    float b_coefficient;

    RangedWeapon(int x, int y, int width, int height, std::string img_path )
            : Weapon(x, y, width, height, img_path) { cout << "RangedWeapon created!" << endl; }
    ~RangedWeapon();
    virtual void prepare();
    virtual void shoot();
    void moveCrosshair();
    void createCrosshair();
    void markSemicircle();
    void sortVector();
    void display() override;
    void moveBullet();
};


#endif //MICEWARS_RANGEDWEAPON_H
