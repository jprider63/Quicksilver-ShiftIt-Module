//
//  QSShiftItControlProvider.h
//  ShiftIt Module
//
//  Created by James Parker on 3/9/12.
//  Copyright (c) 2012. All rights reserved.
//

//#import <QSCore/QSCore.h>

@interface QSShiftItControlProvider : QSActionProvider
- (void)left;
- (void)right;
- (void)top;
- (void)bottom;
- (void)topLeft;
- (void)topRight;
- (void)bottomLeft;
- (void)bottomRight;
- (void)center;
- (void)fullscreen;
@end
