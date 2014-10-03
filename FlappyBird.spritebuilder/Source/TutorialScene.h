//
//  TutorialScene.h
//  FlappyBird
//
//  Created by Gerald Monaco on 10/3/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface TutorialScene : CCNode <CCPhysicsCollisionDelegate>
-(void)update:(CCTime)delta;
-(void) touchBegan;
@end
