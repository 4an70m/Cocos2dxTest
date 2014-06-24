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
