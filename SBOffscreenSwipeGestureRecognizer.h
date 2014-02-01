/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "_UIScreenEdgePanRecognizerDelegate.h"
#import "SBPanGestureRecognizer.h"

@class _UIScreenEdgePanRecognizerSettings, _UIScreenEdgePanRecognizer;

__attribute__((visibility("hidden")))
@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {
	unsigned m_offscreenEdge;
	BOOL m_shouldUseUIKitHeuristics;
	float m_edgeMargin;
	float m_falseEdge;
	int m_touchesChecked;
	CGPoint m_firstTouch;
	float m_edgeCenter;
	float m_allowableDistanceFromEdgeCenter;
	BOOL m_requiresSecondTouchInRange;
	_UIScreenEdgePanRecognizer* m_recognizer;
}
@property(assign, nonatomic) float edgeCenter;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings* settings;
@property(assign, nonatomic) BOOL requiresSecondTouchInRange;
@property(assign, nonatomic) float allowableDistanceFromEdgeCenter;
@property(assign, nonatomic) float falseEdge;
@property(assign, nonatomic) float edgeMargin;
@property(assign, nonatomic) BOOL shouldUseUIKitHeuristics;
+(void)reloadDefaults;
-(void)screenEdgePanRecognizerStateDidChange:(id)screenEdgePanRecognizerState;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;
-(void)setState:(int)state;
-(void)_updateAnimationDistanceAndEdgeCenter;
-(BOOL)secondTouchQualifies:(const XXStruct_pqIg_A*)qualifies;
-(CGRect)activeScreenBounds;
-(BOOL)firstTouchQualifies:(const XXStruct_pqIg_A*)qualifies;
-(BOOL)_firstTouchInRange:(const XXStruct_pqIg_A*)range;
-(void)dealloc;
-(void)reset;
-(BOOL)isHandlingLongPress;
-(id)initForOffscreenEdge:(unsigned)offscreenEdge;
@end

