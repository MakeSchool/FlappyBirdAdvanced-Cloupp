//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"
#import "TutorialScene.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : TutorialScene
{
    // define variables here;
    Character*        character;
    CCPhysicsNode*    physicsNode;
    CCParticleSystem* trail;
    int               points;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;
-(void) updateScore;
-(void) gameOver;
-(void) addPowerup;

@end
