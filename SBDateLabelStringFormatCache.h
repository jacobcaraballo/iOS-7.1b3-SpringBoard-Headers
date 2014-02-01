/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFLockScreenDateFormatter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDateFormatter, NSNumberFormatter, NSDate;

__attribute__((visibility("hidden")))
@interface SBDateLabelStringFormatCache : XXUnknownSuperclass <SBFLockScreenDateFormatter> {
	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateFormatter* _abbreviatedTimerFormatter;
	NSDateFormatter* _alarmSnoozeFormatter;
	NSDate* _timerReferenceDate;
	NSDate* _alarmReferenceDate;
}
+(id)sharedInstance;
+(void)load;
-(id)formatAlarmSnoozeDuration:(double)duration;
-(id)formatAbbreviatedTimerDuration:(double)duration;
-(id)formatTimerDuration:(double)duration;
-(id)formatDateAsRelativeDateStyle:(id)style;
-(BOOL)_shouldShowHoursForTimerDuration:(double)timerDuration;
-(id)formatDateAsTimeNoAMPM:(id)ampm;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)weekMonthDayStyle;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)style;
-(id)formatDateAsTimeStyle:(id)style;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)style;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)timeStyle;
-(id)formatDateAsDayMonthYearStyle:(id)style;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)time;
-(id)formatDateAsDayOfWeek:(id)week;
-(id)formatNumberAsDecimal:(id)decimal;
-(void)resetFormatters:(id)formatters;
-(void)resetFormattersIfNecessary;
-(void)dealloc;
-(id)init;
@end

