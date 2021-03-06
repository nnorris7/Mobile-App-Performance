//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Java/src/main/java/harrycheung/map/shared/Gate.java
//

#ifndef _HCMGate_H_
#define _HCMGate_H_

@class HCMGateTypeEnum;

#include "J2ObjC_header.h"
#include "Point.h"

#define HCMGate_BEARING_RANGE 90
#define HCMGate_LINE_WIDTH 80

@interface HCMGate : HCMPoint {
 @public
  HCMGateTypeEnum *type_;
  jint splitNumber_;
}

- (instancetype)initWithHCMGateTypeEnum:(HCMGateTypeEnum *)type
                                withInt:(jint)splitNumber
                             withDouble:(jdouble)latitude
                             withDouble:(jdouble)longitude
                             withDouble:(jdouble)bearing;

- (HCMPoint *)crossedWithHCMPoint:(HCMPoint *)start
                     withHCMPoint:(HCMPoint *)destination;

@end

J2OBJC_EMPTY_STATIC_INIT(HCMGate)

J2OBJC_FIELD_SETTER(HCMGate, type_, HCMGateTypeEnum *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(HCMGate, LINE_WIDTH, jint)

J2OBJC_STATIC_FIELD_GETTER(HCMGate, BEARING_RANGE, jint)
CF_EXTERN_C_END

typedef HCMGate HarrycheungMapSharedGate;

J2OBJC_TYPE_LITERAL_HEADER(HCMGate)

#endif // _HCMGate_H_
