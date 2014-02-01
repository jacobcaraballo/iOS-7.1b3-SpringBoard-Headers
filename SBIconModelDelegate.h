/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconModelDelegate <NSObject>
-(BOOL)canAddDownloadingIconForApplication:(id)application;
-(BOOL)canAddWebClip:(id)clip;
-(BOOL)supportsDock;
-(unsigned)maxColCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)maxRowCountForListInRootFolderWithInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)maxIconCountForDock;
-(unsigned)maxIconCountForListInFolderClass:(Class)folderClass;
-(unsigned)maxListCountForFolders;
@optional
-(void)didDeleteIconState:(id)state;
-(void)didSaveIconState:(id)state;
-(BOOL)canSaveIconState:(id)state;
@end
