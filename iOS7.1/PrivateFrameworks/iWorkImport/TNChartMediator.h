//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartMediator.h>

#import "TSCECalculationEngineRegistration.h"
#import "TSCEFormulaOwning.h"

@class NSCondition, NSMutableArray, TNChartFormulaStorage, TNMutableChartFormulaStorage, TSCECalculationEngine, TSCEFormulaRewriteSpec, TSUIntToIntDictionary;

__attribute__((visibility("hidden")))
@interface TNChartMediator : TSCHChartMediator <TSCECalculationEngineRegistration, TSCEFormulaOwning>
{
    struct __CFUUID *mEntityId;
    TNChartFormulaStorage *mFormulaStorage;
    NSMutableArray *mFormulasToRewrite;
    NSMutableArray *mFormulasToRecalculate;
    TSCEFormulaRewriteSpec *mInFlightRewriteSpec;
    int mScatterFormat;
    BOOL mIsRegisteredWithCalcEngine;
    BOOL mIsEditing;
    BOOL mEditingHasIsPhantomOverride;
    BOOL mEditingIsPhantomOverride;
    TNChartFormulaStorage *mEditingStorageOverride;
    TNMutableChartFormulaStorage *mEditingAccumulatedFormulas;
    TNMutableChartFormulaStorage *mEditingActiveFormulas;
    NSCondition *mImportUpgradeCondition;
    BOOL mHasBlittedSinceConditionVarSet;
    BOOL mShouldFixAreaFormula;
    TSUIntToIntDictionary *mFormulaIndexToGridIndex;
}

+ (id)propertiesThatInvalidateMediator;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=mIsEditing;
@property(readonly, nonatomic) BOOL hasBlittedSinceConditionVarSet; // @synthesize hasBlittedSinceConditionVarSet=mHasBlittedSinceConditionVarSet;
@property(readonly, nonatomic) struct __CFUUID *entityID; // @synthesize entityID=mEntityId;
- (void)localizeFormulaLiteralsWithBundle:(id)arg1;
- (id)customNegScatterXFormulas;
- (id)customPosScatterXFormulas;
- (id)customNegFormulas;
- (id)customPosFormulas;
- (id)columnFormulas;
- (id)rowFormulas;
- (int)formulasDirection;
- (id)dataFormulas;
- (void)replaceReferencesInFormulasWithOwnerIDMap:(id)arg1;
- (void)replaceReferencesInFormulas:(id)arg1 withOwnerIDMap:(id)arg2;
- (BOOL)p_tableHasCell:(CDStruct_78b871e1)arg1 withCalcEngine:(id)arg2;
- (BOOL)p_tableHasRange:(CDStruct_5744d895)arg1 withCalcEngine:(id)arg2;
- (id)referencedEntities;
- (id)referencedEntitiesInMap:(id)arg1;
- (id)expandSingleRangeForProposedCategoryLabels:(CDStruct_5744d895)arg1;
- (void)repairMissingSeriesLabelsInMap:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1;
- (void)repairMissingCategoryLabelsInMap:(id)arg1 ignoringNonVisibleLabels:(BOOL)arg2;
- (void)p_repairMissingCategoryLabelsInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsRegularInMap:(id)arg1;
- (void)p_repairMissingTabularCategoryLabelsIrregularInMap:(id)arg1;
- (void)p_disconnectLabelsInMap:(id)arg1 ofType:(int)arg2;
- (void)p_repairMissingStaticCategoryLabelsInMap:(id)arg1;
- (id)p_newStaticNameForCategoryAvoidingExistingNames:(id)arg1 runningCount:(unsigned int *)arg2;
- (BOOL)p_tabularCategoryLabelsAppearRegularInMap:(id)arg1;
- (BOOL)p_labelsAreStaticInMap:(id)arg1 ofType:(int)arg2;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct ChartMediatorArchive *)arg1 unarchiver:(id)arg2;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned int)arg2;
- (id)p_commandToSetSeriesNameFormulaWrapper:(id)arg1 seriesIndex:(unsigned int)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned int)arg2;
- (id)seriesNameFormulaForSeriesIndex:(unsigned int)arg1;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned int)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)setImportUpgradeCondition:(id)arg1;
- (void)copyValuesIntoChartModelOutOfBandUsingCalcEngine:(id)arg1 formulaMap:(id)arg2;
- (BOOL)registerLast;
- (void)unregisterFromCalculationEngine:(id)arg1;
- (void)registerWithCalculationEngineForDocumentLoad:(id)arg1;
- (void)p_reregister:(BOOL)arg1 withCalculationEngine:(id)arg2;
- (id)objectToArchiveInDependencyTracker;
- (id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)p_detectAndRepairDeletedFormulas:(id)arg1 forRewriteSpec:(id)arg2;
- (void)p_detectAndRepairInsertedSeriesConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)p_detectAndRepairInsertedCategoryConditionFromPreviousState:(id)arg1 andEditingState:(id)arg2 forTectonicShift:(id)arg3;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)p_registerFormulaeWithCalcEngine:(id)arg1;
- (void)p_registerAreaFormulaForMap:(id)arg1 withCalcEngine:(id)arg2;
- (void)p_registerHubFormulaWithCalcEngine:(id)arg1;
- (void)p_unregisterAllFormulaeFromCalcEngine:(id)arg1;
- (void)writeResultsForCalculationEngine:(id)arg1;
- (CDStruct_4d60f806)recalculateForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(CDStruct_a91f2c80)arg2 rewriteSpec:(id)arg3;
- (void)releaseForCalculationEngine:(id)arg1;
- (void)retainForCalculationEngine:(id)arg1;
- (void)p_copyValuesIntoChartModelFromPair:(id)arg1;
- (void)p_copyValuesIntoToChartModel:(id)arg1 formulaMap:(id)arg2;
- (id)p_untitledLabelWithIndex:(unsigned int)arg1;
- (void)synchronizeModelFromFormulaStorage;
- (void)setFormulaStorage:(id)arg1;
- (void)setFormulaStorage:(id)arg1 doRegistration:(BOOL)arg2;
- (id)formulaStorage;
- (void)p_hackSetCalcEngineLegacyGlobalID;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned int)arg2 dataType:(int)arg3;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned int)arg1 dataType:(int)arg2;
- (id)p_tstFormulaFromForumulaWrapper:(id)arg1;
- (id)p_formulaWrapperFromTSTFormula:(id)arg1;
- (int)p_formulaTypeFromDataType:(int)arg1;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToChangeLabelFormulas:(id)arg1 forType:(int)arg2;
- (id)categoryLabelFormulas;
- (id)labelFormulasForType:(int)arg1;
- (id)numberFormatForSeries:(id)arg1 index:(unsigned int)arg2 axisType:(int)arg3;
- (id)numberFormatForAxis:(id)arg1;
- (id)p_defaultDecimalFormat;
- (unsigned int)formulaIndexForSeriesDimension:(id)arg1;
- (id)seriesDimensionForFormulaIndex:(unsigned int)arg1;
- (BOOL)p_isScatterOrBubble;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (void)invalidateAndSynchronizeMediator;
@property(readonly, nonatomic) int direction;
- (void)setEditingStorageOverride:(id)arg1;
- (void)clearEditingIsPhantomOverride;
- (void)setEditingIsPhantomOverride:(BOOL)arg1;
- (void)synchronizeModelFromFormulaStorage:(id)arg1;
- (id)formulaStorageFromTable:(id)arg1 selection:(id)arg2 direction:(int)arg3;
@property(readonly, nonatomic) TSCECalculationEngine *calculationEngine;
- (BOOL)isPhantom;
@property(readonly, nonatomic) int scatterFormat;
@property(readonly, nonatomic) BOOL labelFormulasAreAllStatic;
- (BOOL)labelFormulasAreAllStaticInFormulaStorage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 direction:(int)arg3;
- (id)initWithChartInfo:(id)arg1 withTable:(id)arg2 selection:(id)arg3 direction:(int)arg4;
- (id)initWithChartInfo:(id)arg1;

@end
