#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

    cocos2d::Sprite *mySprite;

    void StopEffect(float dt);

    void StopEffects(float dt);

    void StopMusic(float dt);

    void PlayEffect(float dt);

    void PauseMusic(float dt);

    void ResumeMusic(float dt);

    bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    void onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event);
    void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);

    void onTouchesBegan(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event);
    void onTouchesMoved(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event);
    void onTouchesEnded(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event);

    void Play(cocos2d::Ref *pSender);
    void Highscores(cocos2d::Ref *pSender);
    void Settings(cocos2d::Ref *pSender);

    void ImageButton(cocos2d::Ref *pSender);

    void onAcceleration(cocos2d::Acceleration *acc, cocos2d::Event *event);

    unsigned int soundInt;
};

#endif // __HELLOWORLD_SCENE_H__
