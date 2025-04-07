﻿#ifndef REGISTRATION_FORM_H
#define REGISTRATION_FORM_H

#include <QWidget>
#include <QPainter>
#include <QIntValidator>
#include <QRegularExpressionValidator>
#include <QPropertyAnimation>


#include "input_box.h"
#include "login_button.h"
#include "other_login_buttons.h"



class Registration_form : public QWidget
{
    Q_OBJECT
public:
    explicit Registration_form(QWidget *parent = nullptr);

    //动画
    void animations();

    QPropertyAnimation* animation;
    int zoom_rate = 20;

public:
    Input_box* username;
    Input_box* email;
    Input_box* password;

    Login_button* login_button;

    Other_login_buttons* other_login_buttons1;
    Other_login_buttons* other_login_buttons2;
    Other_login_buttons* other_login_buttons3;
    Other_login_buttons* other_login_buttons4;


    void crop_corner();//绘制纯白矩形
    //绘制文本
    void draw_text();
protected:
    void paintEvent(QPaintEvent* event);


public slots:
    void execute_animation(Login_button::AnimationState State);


};

#endif // REGISTRATION_FORM_H
