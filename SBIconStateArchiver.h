/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBIconStateArchiver : XXUnknownSuperclass {
}
+(id)_iTunesDictionaryForDownloadingIcon:(id)downloadingIcon;
+(id)_iTunesDictionaryForLeafIcon:(id)leafIcon;
+(id)_iTunesDictionaryForLeafIdentifier:(id)leafIdentifier;
+(id)_iTunesIconCellForCell:(id)cell preApex:(BOOL)apex pending:(BOOL)pending iconSource:(id)source;
+(id)_iTunesIconListForList:(id)list preApex:(BOOL)apex pending:(BOOL)pending iconSource:(id)source;
+(id)_iTunesIconListsForLists:(id)lists preApex:(BOOL)apex pending:(BOOL)pending iconSource:(id)source;
+(id)_modernIconListsForLists:(id)lists allowFolders:(BOOL)folders;
+(id)_modernIconListForList:(id)list allowFolders:(BOOL)folders;
+(id)_modernIconCellForCell:(id)cell allowFolders:(BOOL)folders;
+(id)_migrateLeafIdentifierIfNecessary:(id)necessary;
+(id)_nodeFromRepresentation:(id)representation context:(id)context;
+(id)_representationForNode:(id)node;
+(id)_representationForFolder:(id)folder;
+(id)_folderTypeForFolder:(id)folder;
+(id)_folderFromRepresentation:(id)representation withContext:(id)context;
+(Class)_folderClassForFolderType:(id)folderType context:(id)context;
+(id)_listFromRepresentation:(id)representation withMaxIconCount:(unsigned)maxIconCount context:(id)context overflow:(id)overflow;
+(id)_representationForList:(id)list;
+(id)_representationForIcon:(id)icon;
+(id)_iconFromRepresentation:(id)representation withContext:(id)context;
+(id)_newFolderIconForFolder:(id)folder;
+(id)rootArchiveFromITunesRepresentation:(id)itunesRepresentation;
+(id)iTunesRepresentationFromRootArchive:(id)rootArchive preApex:(BOOL)apex pending:(BOOL)pending iconSource:(id)source;
+(id)indexPathForLeafIdentifier:(id)leafIdentifier inArchive:(id)archive;
+(id)leafIdentifiersFromArchive:(id)archive;
+(id)modernizeRootArchive:(id)archive;
+(id)unarchive:(id)unarchive withIconSource:(id)iconSource;
+(id)archiveRootFolder:(id)folder;
+(id)archive:(id)archive;
@end

