///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGListFileMembersContinueError;
@class DBSHARINGSharingFileAccessError;
@class DBSHARINGSharingUserError;

#pragma mark - API Object

///
/// The ListFileMembersContinueError union.
///
/// Error for listFileMembersContinue.
///
/// This class implements the DBSerializable protocol (serialize and deserialize instance methods),
/// which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGListFileMembersContinueError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The DBSHARINGListFileMembersContinueErrorTag enum type represents the possible tag states with
/// which the DBSHARINGListFileMembersContinueError union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGListFileMembersContinueErrorTag) {
  /// (no description).
  DBSHARINGListFileMembersContinueErrorUserError,

  /// (no description).
  DBSHARINGListFileMembersContinueErrorAccessError,

  /// cursor in ListFileMembersContinueArg is invalid.
  DBSHARINGListFileMembersContinueErrorInvalidCursor,

  /// (no description).
  DBSHARINGListFileMembersContinueErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGListFileMembersContinueErrorTag tag;

/// (no description). Ensure the isUserError method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharingUserError * _Nonnull userError;

/// (no description). Ensure the isAccessError method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharingFileAccessError * _Nonnull accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of UserError.
///
/// @param userError (no description).
///
/// @return An initialized DBSHARINGListFileMembersContinueError instance.
///
- (nonnull instancetype)initWithUserError:(DBSHARINGSharingUserError * _Nonnull)userError;

///
/// Initializes union class with tag state of AccessError.
///
/// @param accessError (no description).
///
/// @return An initialized DBSHARINGListFileMembersContinueError instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of InvalidCursor.
///
/// About the InvalidCursor tag state: :field:`ListFileMembersContinueArg.cursor` is invalid.
///
/// @return An initialized DBSHARINGListFileMembersContinueError instance.
///
- (nonnull instancetype)initWithInvalidCursor;

///
/// Initializes union class with tag state of Other.
///
/// @return An initialized DBSHARINGListFileMembersContinueError instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value UserError.
///
/// @note Call this method and ensure it returns true before accessing the userError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value UserError.
///
- (BOOL)isUserError;

///
/// Retrieves whether the union's current tag state has value AccessError.
///
/// @note Call this method and ensure it returns true before accessing the accessError property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value AccessError.
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value InvalidCursor.
///
/// @return Whether the union's current tag state has value InvalidCursor.
///
- (BOOL)isInvalidCursor;

///
/// Retrieves whether the union's current tag state has value Other.
///
/// @return Whether the union's current tag state has value Other.
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the DBSHARINGListFileMembersContinueError union.
///
@interface DBSHARINGListFileMembersContinueErrorSerializer : NSObject

///
/// Serializes DBSHARINGListFileMembersContinueError instances.
///
/// @param instance An instance of the DBSHARINGListFileMembersContinueError API object.
///
/// @return A json-compatible dictionary representation of the DBSHARINGListFileMembersContinueError
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFileMembersContinueError * _Nonnull)instance;

///
/// Deserializes DBSHARINGListFileMembersContinueError instances.
///
/// @param dict A json-compatible dictionary representation of the
/// DBSHARINGListFileMembersContinueError API object.
///
/// @return An instantiation of the DBSHARINGListFileMembersContinueError object.
///
+ (DBSHARINGListFileMembersContinueError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end