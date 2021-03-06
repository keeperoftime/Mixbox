#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 110000 && __IPHONE_OS_VERSION_MAX_ALLOWED < 120000

#import "Xcode9_XCTest_CDStructures.h"
#import "Xcode9_SharedHeader.h"
#import <Foundation/Foundation.h>

@class GSKeyboard;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCKeyboardKeyMap : NSObject
{
    struct __GSKeyboard *_inputSource;
    NSData *_layoutData;
    const struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned int _field3;
        unsigned int _field4;
        CDStruct_a561fd19 _field5[1];
    } *_layoutHeader;
    const CDStruct_a561fd19 *_keyboardType;
    const struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned int _field3;
        unsigned char _field4[1];
    } *_keyModifiersToTableNum;
    const struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned int _field3;
        unsigned int _field4[1];
    } *_keyToCharTableIndex;
    const struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned int _field3[1];
    } *_keyStateRecordsIndex;
    const CDStruct_27a325c0 *_keyStateTerminators;
    const CDStruct_27a325c0 *_keySequenceDataIndex;
    NSSet *_numericPadKeyCodes;
    NSDictionary *_systemKeyForKeyCode;
    NSDictionary *_inputsForSystemKey;
    NSDictionary *_inputForKey;
    unsigned long long _longestSystemKey;
    NSDictionary *_modifiersForTableID;
    NSCharacterSet *_validKeyOutputIDs;
    NSDictionary *_inputsForKeyOutputID;
    NSSet *_safeTerminationInputs;
    struct _NSRange _keyStateOutputIDsRange;
    NSIndexSet *_keyStatesWithTerminator;
    NSCharacterSet *_validKeyStates;
    NSCharacterSet *_validSequenceIDs;
    _Bool _canEmitSequenceIDAndKeyState;
    NSDictionary *_inexactSequencesNFC;
    unsigned long long _longestInexactSequence;
    NSDictionary *_stringsForIntendedStrings;
}

@property(readonly) _Bool canEmitSequenceIDAndKeyState; // @synthesize canEmitSequenceIDAndKeyState=_canEmitSequenceIDAndKeyState;
- (id)description;
- (id)stringForIntendedString:(id)arg1;
- (id)stringForInputs:(id)arg1;
- (id)stringForInput:(id)arg1;
- (id)_stringForInput:(id)arg1 keyState:(unsigned long long *)arg2 output:(id)arg3;
- (void)addCachedPaths:(id)arg1 endingString:(id)arg2 range:(struct _NSRange)arg3;
- (id)cachedPathsEndingString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_pathsForSequenceID:(unsigned short)arg1 range:(id)arg2 nextPath:(id)arg3 results:(id)arg4;
- (_Bool)_pathsForSystemKeyEndingString:(id)arg1 range:(struct _NSRange)arg2 nextPath:(id)arg3 results:(id)arg4;
- (id)pathsEndingString:(id)arg1 range:(id)arg2 nextPath:(id)arg3;
- (id)_pathByTerminatingKeyState:(unsigned short)arg1 next:(id)arg2 output:(id)arg3 sequenceID:(unsigned short)arg4;
- (id)pathsForSequenceID:(unsigned short)arg1 nextPath:(id)arg2;
- (void)_sequenceIDsEndingString:(id)arg1 range:(struct _NSRange)arg2 suffixRange:(struct _NSRange)arg3 results:(id)arg4;
- (id)sequenceIDsEndingString:(id)arg1 range:(struct _NSRange)arg2;
- (id)sequenceIDsForString:(id)arg1 range:(struct _NSRange)arg2;
- (id)sequenceIDsForString:(id)arg1;
- (id)stringForSequenceID:(unsigned short)arg1;
- (id)inputsForOutputID:(unsigned short)arg1;
- (id)inputsForText:(id)arg1 currentFlags:(unsigned long long)arg2;
- (id)inputsForText:(id)arg1;
- (id)inputsToSetModifierFlags:(unsigned long long)arg1 currentFlags:(unsigned long long)arg2;
- (id)inputForKey:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (_Bool)canEmitKeyState:(unsigned short)arg1;
- (_Bool)canEmitSequenceIDAsOutputID:(unsigned short)arg1;
- (_Bool)canEmitSequenceID:(unsigned short)arg1;
- (_Bool)canEmitOutputID:(unsigned short)arg1;
- (unsigned long long)uniqueKeyboardType:(unsigned long long)arg1;
- (_Bool)supportsKeyboardType:(unsigned long long)arg1;
@property(readonly, getter=isPrimary) _Bool primary;
- (void)dealloc;
- (void)_initIntendedStrings;
- (void)_initInexactSequences;
- (void)_initValidity;
- (void)_initKeyStates;
- (void)_initKeyOutputs;
- (void)_initModifiers;
- (void)_initKeyboardKeys;
- (id)initWithInputSource:(struct __GSKeyboard *)arg1 layoutData:(id)arg2 index:(unsigned long long)arg3;
- (id)init;

@end

#endif