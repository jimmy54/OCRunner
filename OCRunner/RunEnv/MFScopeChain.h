//
//  ANEScopeChain.h
//  MangoFix
//
//  Created by jerry.yong on 2018/2/28.
//  Copyright © 2018年 yongpengliang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MFValue;
NS_ASSUME_NONNULL_BEGIN
@interface MFScopeChain: NSObject
@property (weak, nonatomic) id instance;
@property (strong, nonatomic) MFScopeChain *next;
@property (strong, nonatomic) MFScopeChain *top;
@property (strong, nonatomic) NSMutableArray <MFValue *>* parameters;

+ (instancetype)scopeChainWithNext:(MFScopeChain *)next;
- (nullable MFValue *)getValueWithIdentifier:(NSString *)identifier endScope:(nullable MFScopeChain *)endScope;
- (nullable MFValue *)getValueWithIdentifierInChain:(NSString *)identifier;
- (nullable MFValue *)getValueWithIdentifier:(NSString *)identifer;
- (void)setValue:(MFValue *)value withIndentifier:(NSString *)identier;
- (void)assignWithIdentifer:(NSString *)identifier value:(MFValue *)value;
- (void)setMangoBlockVarNil;
@end
NS_ASSUME_NONNULL_END




