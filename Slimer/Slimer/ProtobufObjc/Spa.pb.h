// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

@class Temperature;
@class Temperature_Builder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface SpaRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface Temperature : PBGeneratedMessage {
@private
  BOOL hasTemperature_:1;
  BOOL hasSetPoint_:1;
  BOOL hasDerivative_:1;
  BOOL hasTriggerState_:1;
  Float32 temperature;
  Float32 setPoint;
  Float32 derivative;
  int32_t triggerState;
}
- (BOOL) hasTemperature;
- (BOOL) hasSetPoint;
- (BOOL) hasDerivative;
- (BOOL) hasTriggerState;
@property (readonly) Float32 temperature;
@property (readonly) Float32 setPoint;
@property (readonly) Float32 derivative;
@property (readonly) int32_t triggerState;

+ (Temperature*) defaultInstance;
- (Temperature*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (Temperature_Builder*) builder;
+ (Temperature_Builder*) builder;
+ (Temperature_Builder*) builderWithPrototype:(Temperature*) prototype;
- (Temperature_Builder*) toBuilder;

+ (Temperature*) parseFromData:(NSData*) data;
+ (Temperature*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Temperature*) parseFromInputStream:(NSInputStream*) input;
+ (Temperature*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Temperature*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Temperature*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface Temperature_Builder : PBGeneratedMessage_Builder {
@private
  Temperature* result;
}

- (Temperature*) defaultInstance;

- (Temperature_Builder*) clear;
- (Temperature_Builder*) clone;

- (Temperature*) build;
- (Temperature*) buildPartial;

- (Temperature_Builder*) mergeFrom:(Temperature*) other;
- (Temperature_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (Temperature_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasTemperature;
- (Float32) temperature;
- (Temperature_Builder*) setTemperature:(Float32) value;
- (Temperature_Builder*) clearTemperature;

- (BOOL) hasSetPoint;
- (Float32) setPoint;
- (Temperature_Builder*) setSetPoint:(Float32) value;
- (Temperature_Builder*) clearSetPoint;

- (BOOL) hasDerivative;
- (Float32) derivative;
- (Temperature_Builder*) setDerivative:(Float32) value;
- (Temperature_Builder*) clearDerivative;

- (BOOL) hasTriggerState;
- (int32_t) triggerState;
- (Temperature_Builder*) setTriggerState:(int32_t) value;
- (Temperature_Builder*) clearTriggerState;
@end
