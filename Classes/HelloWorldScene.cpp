#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "NewScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    mySprite = Sprite::create("CloseNormal.png");

    mySprite->setPosition(Point((visibleSize.width / 2) + origin.x,(visibleSize.height / 2) + origin.y));
    
    this->addChild(mySprite);

    //Tutorials 5-12

    //positioning functions
    //uncomment to try

    //MoveBy positions a sprite, where x and y are absolute coordinates
    //auto action1 = MoveBy::create(3, Point(100, 0));

    //mySprite->runAction(action1);

    //MoveTo position sprite, where x and y are relative coordinates
    //auto action2 = MoveTo::create(3, Point(100,300));

    //mySprite->runAction(action2);

    //JumpBy position sprite, relative finishing position
    //auto action3 = JumpBy::create(3, Point(100, 0), 50, 3);

    //mySprite->runAction(action3);

    //JumpTo position sprite, absolute finishing position
    //auto action4 = JumpTo::create(3, Point(100, 30), 50, 6);

	//mySprite->runAction(action4);

    //moves, using bezier curves (кривые безье)
    //ccBezierConfig bezier;
    //bezier.controlPoint_1 = Point(0, visibleSize.height / 2);
    //bezier.controlPoint_2 = Point(300, -visibleSize.height / 2);
    //relative to the finishing point
    //auto action5 = BezierBy::create(3, bezier);

	//mySprite->runAction(action5);

	//moves, using bezier curves (кривые безье)
	//ccBezierConfig bezier;
	//bezier.controlPoint_1 = Point(0, visibleSize.height / 2);
	//bezier.controlPoint_2 = Point(300, -visibleSize.height / 2);
	//bezier.endPosition = Point(200,100);
	//absolute to the finishing point
	//auto action6 = BezierTo::create(8, bezier);

	//mySprite->runAction(action6);

    //places sprite by absolute coordinates
	//auto action7 = Place::create(Point(98, 289));

	//mySprite->runAction(action7);

    //Tutorial 13-21

    //scales
    //uncomment to try

    //relative scale
    //scales for t time, x - times for x-coordinate and y - times for y-coordinate
    //auto action1 = ScaleBy::create(3, 3, 0.5);

    //mySprite->runAction(action1);

    //absolute scale
    //scales for t time, x - times for x-coordinate and y - times for y-coordinate
	//auto action2 = ScaleTo::create(3, 3, 0.5);

	//mySprite->runAction(action2);

    //rotation
	//uncomment to try

    //rotation, relative to the current angle state
    //auto action3 = RotateBy::create(3, 90);

    //mySprite->runAction(action3);

    //rotation to the absolute position
	//auto action4 = RotateTo::create(3, 90);

	//mySprite->runAction(action4);

    //changes the color
    //uncomment to try

    //changes the sprite's color, affecting r g b, relative to current rgb state
    //auto action5 = TintBy::create(3, -255, 0, 0);

    //mySprite->runAction(action5);

    //changes the sprite's color, affecting r g b to absolute numbers
	//auto action6 = TintTo::create(3, 255, 0, 0);

	//mySprite->runAction(action6);

    //fading
	//uncomment to try

	//changes the sprite's opacity to a particular number
	//auto action7 = FadeTo::create(3, 100);

	//mySprite->runAction(action7);

    //changes the sprite's opacity to visible
    //mySprite->setOpacity(0);
	//auto action8 = FadeIn::create(3);

	//mySprite->runAction(action8);

    //changes the sprite's opacity to zero
	//auto action9 = FadeOut::create(3);

	//mySprite->runAction(action9);

    //Tutorial 22-26

	//repeating
	//uncomment to try

    //auto actionRotation = RotateBy::create(2,45);
    //action x is repeated y times
    //auto action1 = Repeat::create(actionRotation,5);

    //mySprite->runAction(action1);

    //repeat forever action

    //auto rotateAction = RotateBy(1, 90);
    //auto action2 = RepeatForever(rotateAction);

    //mySprite->runAction(action2);

    //sequence of actions
    //actions are performed one by one
    //auto rotateAction = RotateBy::create(2,118);\
    //auto moveAction = MoveBy::create(5, Point(100, -90));
    //auto action3 = Sequence::create(rotateAction, moveAction, NULL);

    //mySprite->runAction(action3);

    //skewing (наклоны)
    //time, skew x-coordinate, skew y-coordinate
    //skew is set relative to current skew state
    //auto action4 = SkewBy::create(4, 70, 50);

    //mySprite->runAction(action4);

	//new skew is absolute
	//auto action5 = SkewTo::create(6, 70, 50);

	//mySprite->runAction(action5);

    //Tutorial 27-34
    //playing sound

    //change sound effect volume
    //CocosDenshion::SimpleAudioEngine::getInstance()->setEffectsVolume(0.5);

    //change music background music
    //CocosDenshion::SimpleAudioEngine::getInstance()->setBackgroundMusicVolume(0.5);

    //play sound 1 time
    //CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("audio/Collide.wav");

    //play sound infinite times
    //soundInt = CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("audio/Collide.wav", true);

    //function stops all effects after 5 seconds
    //this->schedule(schedule_selector(HelloWorld::StopEffects), 5.0f);

    //function stops effect with soundInt id after 5 seconds
    //this->schedule(schedule_selector(HelloWorld::StopEffect), 5.0f);

    //play background music
    //load it
    //CocosDenshion::SimpleAudioEngine::getInstance()->preloadBackgroundMusic("audio/mainMenuMusic.mp3");
    //and play once
    //CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("audio/mainMenuMusic.mp3");
    //or infinite times
    //CocosDenshion::SimpleAudioEngine::getInstance()->playBackgroundMusic("audio/mainMenuMusic.mp3", true);

    //stop background music
    //this->schedule(schedule_selector(HelloWorld::StopMusic), 5.0f);

    //preloading sound effect
    //CocosDenshion::SimpleAudioEngine::getInstance()->preloadEffect("audio/Collide.wav");
    //this->schedule(schedule_selector(HelloWorld::PlayEffect), 5.0f);

    //pausing music
    //this->schedule(schedule_selector(HelloWorld::PauseMusic), 3.0f);
    //resuming music
    //this->schedule(schedule_selector(HelloWorld::ResumeMusic), 6.0f);

    //Tutorial 35-42
    //Touch events

    //single touch listener

    //adding event listener
    //auto singleListener = EventListenerTouchOneByOne::create();
    //singleListener->setSwallowTouches(true);

    //singleListener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    //singleListener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    //singleListener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);

    //_eventDispatcher->addEventListenerWithSceneGraphPriority(singleListener, this);

    //multi touch listener

    //auto multiTouchListener = EventListenerTouchAllAtOnce::create();
    //multiTouchListener->onTouchesBegan = CC_CALLBACK_2(HelloWorld::onTouchesBegan, this);
    //multiTouchListener->onTouchesMoved = CC_CALLBACK_2(HelloWorld::onTouchesMoved, this);
    //multiTouchListener->onTouchesEnded = CC_CALLBACK_2(HelloWorld::onTouchesEnded, this);

    //_eventDispatcher->addEventListenerWithSceneGraphPriority(multiTouchListener, this);

    //Tutorials 43-46
    //Menues

    //auto menu_item_1 = MenuItemFont::create("Play", CC_CALLBACK_1(HelloWorld::Play, this));
    //auto menu_item_2 = MenuItemFont::create("Highscores", CC_CALLBACK_1(HelloWorld::Highscores, this));
    //auto menu_item_3 = MenuItemFont::create("Settings", CC_CALLBACK_1(HelloWorld::Settings, this));
    //auto menu_item_4 = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(HelloWorld::ImageButton, this));

    //manual menu items positioning
    //menu_item_1->setPosition(Point(visibleSize.width / 2, (visibleSize.height / 5) * 4));
    //menu_item_2->setPosition(Point(visibleSize.width / 2, (visibleSize.height / 5) * 3));
    //menu_item_3->setPosition(Point(visibleSize.width / 2, (visibleSize.height / 5) * 2));
    //menu_item_4->setPosition(Point(visibleSize.width / 2, (visibleSize.height / 5) * 1));

    //auto *menu = Menu::create(menu_item_1, menu_item_2, menu_item_3, menu_item_4, NULL);
    //auto menu items positioning
    //menu->alignItemsVertically();
    //menu->setPosition(Point(0, 0));
    //this->addChild(menu);

    //Tutorials 47-51
    //Scene stuff

    //Tutorial 52
    //Sprite animation

    //auto action = MoveBy::create(3, Point(100, 0));

    //mySprite->runAction(EaseElasticInOut::create(action, 0.5));
    //mySprite->runAction(EaseBounceIn::create(action));

    //Tutorial 53
    //Accelerometer

    Device::setAccelerometerEnabled(true);
    auto listener = EventListenerAcceleration::create(CC_CALLBACK_2(HelloWorld::onAcceleration, this));

    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

    return true;
}

void HelloWorld::PauseMusic(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

void HelloWorld::ResumeMusic(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}

void HelloWorld::PlayEffect(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("audio/Collide.wav", true);
}

void HelloWorld::StopEffects(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->stopAllEffects();
}

void HelloWorld::StopEffect(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->stopEffect(soundInt);
}

void HelloWorld::StopMusic(float dt)
{
	CocosDenshion::SimpleAudioEngine::getInstance()->stopBackgroundMusic();
}

bool HelloWorld::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLog("onTouchBegan x = %f, y = %f", touch->getLocation().x, touch->getLocation().y);

	return true;
}

void HelloWorld::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLog("onTouchMoved x = %f, y = %f", touch->getLocation().x, touch->getLocation().y);
}

void HelloWorld::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLog("onTouchEnded x = %f, y = %f", touch->getLocation().x, touch->getLocation().y);
}

void HelloWorld::onTouchesBegan(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event)
{
	CCLog("MULTI TOUCH BEGAN");
}

void HelloWorld::onTouchesMoved(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event)
{
	CCLog("MULTI TOUCH MOVED");
}

void HelloWorld::onTouchesEnded(const std::vector<cocos2d::Touch *> &touches, cocos2d::Event *event)
{
	CCLog("MULTI TOUCH ENDED");
}

void HelloWorld::Play(cocos2d::Ref *pSender)
{
	CCLog("Play");
	//creating new scene
	auto scene = NewScene::createScene();
	//pushing it to the view
	Director::getInstance()->pushScene(scene);
	//now we see a new scene 'NewScene'
	//it's on the top of a stack, while previous scene is right below it
}

void HelloWorld::Highscores(cocos2d::Ref *pSender)
{
	CCLog("Highscores");

	//replace scene pops the current scene and pushes to stack a new scene
	//which is actually a replacement, yeah
	auto scene = NewScene::createScene();

	//transition
	Director::getInstance()->replaceScene(TransitionFlipX::create(2, scene));
}

void HelloWorld::Settings(cocos2d::Ref *pSender)
{
	CCLog("Settings");
}

void HelloWorld::ImageButton(cocos2d::Ref *pSender)
{
	CCLog("IMAGE BUTTON");
}

void HelloWorld::onAcceleration(cocos2d::Acceleration *acc, cocos2d::Event *event)
{
	CCLog("%f", acc->z);
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif

    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
