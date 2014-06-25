#include "HelloWorldScene.h"

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


    return true;
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
