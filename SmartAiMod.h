// SmartAiMod.h
#pragma once

#ifndef SMART_AI_MOD_H

#define SMART_AI_MOD_H

#define MOD_AI_SMART (true)

#if defined(MOD_AI_SMART)

// CvPlayerAI 
//------------
// Great Writer waits iddle for (6) turns until culture blast due to no alternatives.
#define MOD_AI_SMART_GREAT_WRITER_WAIT_TO_CONSUME (true)
// Changes the check for golden age to be priority only if they are influential against 1/4 of the players needed.
#define MOD_AI_SMART_GREAT_ARTIST_BRAZIL_TWEAK (true)
// Great Artist waits iddle for (6) turns until gonden age due to no alternatives.
#define MOD_AI_SMART_GREAT_ARTIST_WAIT_TO_CONSUME (true)
// Great Musician waits iddle for (6) turns until gonden age due to no alternatives.
#define MOD_AI_SMART_GREAT_MUSICIAN_WAIT_TO_CONSUME (true)
// Great merchant creates customs house only for first quarter of the game, excluding if civ with Venice powers. 
#define MOD_AI_SMART_GREAT_MERCHANT_CUSTOMS_HOUSE_FIRST_QUARTER (true)
// Great scientist creates academy only for first third of the game. 
#define MOD_AI_SMART_GREAT_SCIENTIST_ACADEMY_FIRST_THIRD (true)

// CvGrandStrategyAI
//-------------------
// Lowers the culture priority part that's based on era.
#define MOD_AI_SMART_GRAND_STRATEGY_CULTURE_LESS_PRIORITY (true)
// Rises the science priority part that's based on era, adjusts priority boost from apollo project.
#define MOD_AI_SMART_GRAND_STRATEGY_SCIENCE_MORE_PRIORITY (true)

// CvPolicyClasses
//-----------------
// Ignore grand strategy flavor modifications until medieval era.
#define MOD_AI_SMART_POLICIES_IGNORE_GRAND_STRATEGY_EARLY (true)

// CvPolicyAI
//------------
// Rate a bit lower all starting branches as they mostly have policies only useful at the beginning.
#define MOD_AI_SMART_POLICY_CHOICE_ANCIENT_POLICIES_LESS_VALUE (true)

//CvPolicyClasses
//----------------
// Function to check if branch is considered a starting branch .
#ifdef MOD_AI_SMART_POLICY_CHOICE_ANCIENT_POLICIES_LESS_VALUE
#define MOD_AI_SMART_POLICY_IS_PREREQUIREMENT_BANCH (true)
#endif

// CvEconomicAI
//--------------
// AI stops building archaeologists if has more than 4x the number of sites.
#define MOD_AI_SMART_ARCHAEOLOGISTS_SITES_RATIO (true)

// CvHomelandAI
//--------------
// On archaeologist moves, stop making archaeologists sooner and also disband archaeologists if there are not valid targets.
#define MOD_AI_SMART_ARCHAEOLOGISTS_SCRAP_UNASSIGNED (true)
// Ups unit upgrade priority on even turns, so air units will be able to upgrade, usually not able due to continuous rebase.
#define MOD_AI_SMART_AIR_UPGRADE_TRICK (true)
// Fix to allow upgrades on units in army but not moving or at destination.
#define MOD_AI_SMART_UPGRADE_IN_WAITING_ARMY_FIX (true)
// Units do not heal outside friendly territory at less than 50% max health if they're at danger.
#define MOD_AI_SMART_HEALING_UPGRADE (true)
// Units will flee if health is less than 30%.
#define MOD_AI_SMART_FLEE_FROM_DANGER_LOW_HEALTH (true)
// Change to moves to safety, ai now check water tiles as last option in danger.
#define MOD_AI_SMART_MOVE_TO_SAFEST_PLOT_HOMELAND (true)
// Little bug fix to avoid a null pointer on this function.
#define MOD_AI_SMART_FIRST_TURN_SETTLER_MOVES_FIX (true)
// Function to grant some interceptions based on nearby air units.
#define MOD_AI_SMART_EXECUTE_AIRCRAFT_INTERCEPTIONS (true)
// Now air units will rebase based on nearby interceptors or units on a second preference level. Air units could keep themselves in the same plot.
#define MOD_AI_SMART_EXECUTE_AIRCRAFT_REBASE (true)

// CvEconomicAI
//--------------
// Rectivate AI hurry production, only goes on if less than 60% is done and is not going to be finished next turn, checking for new production if used.
#define MOD_AI_SMART_ECONOMY_HURRY_PRODUCTION_REACTIVATED (true)
// Disband long obsolete units: can be upgraded but is three eras away in tech (eg triremes in industrial era)
#define MOD_AI_SMART_DISBAND_LONG_OBSOLETE_UNITS (true)
// Agree for disband at 3gpt unit maintenance, instead of 4gpt.
#define MOD_AI_SMART_DISBAND_EXTRA_WORKERS_AGGRESIVELY (true)

// CvCity
//--------
// Function to check out if the player is able to hurry production using gold.
#ifdef MOD_AI_SMART_ECONOMY_HURRY_PRODUCTION_REACTIVATED
#define MOD_AI_SMART_ECONOMY_CAN_GOLD_PURCHASE (true)
#endif

// CvTacticalAI
//--------------
// Units will flee if health is less than 30% while not in city or in an army.
#define MOD_AI_SMART_FLEE_FROM_DANGER_UPGRADE (true)
// Change to moves to safety, ai now check water tiles as last option in danger.
#define MOD_AI_SMART_MOVE_TO_SAFETY_WATER_DANGER_TWEAK (true)
// GGs and GAs need to stay in the DANGER ZONE, but only if there are healthy units near it to support it.
#define MOD_CP_MOVE_TO_SAFETY_GREAT_GENERALS_TWEAK (true)
// Upgrade to capture city moves to avoid using ranged units if the city is already at 1 hp.
#define MOD_AI_SMART_CAPTURE_CITY_MOVES_TWEAK (true)
// Upgrade to damage city moves to avoid using ranged units if the city is already at 1 hp, and to stop if not units to conquer and bad dominance on zone.
#define MOD_AI_SMART_DAMAGE_CITY_MOVES_TWEAK (true)
// Rework the execute attack method to move in melee units, reposition ranged units, queue ranged, then melee.
#define MOD_AI_SMART_EXECUTE_ATTACK (true)
// Function to check out the best reposition plot in wich a ranged unit could move and attack, scored on danger.
#ifdef MOD_AI_SMART_EXECUTE_ATTACK
#define MOD_AI_SMART_GET_BEST_REPOSITION_PLOT (true)
#endif
// Launch air units to air sweep missions on target if previously selected.
#define MOD_AI_SMART_EXECUTE_ATTACK_SEND_AIR_SWEEPS (true) 
// Move out air units if they can air sweep to the target to avoid interception.
#define MOD_AI_SMART_FIND_STRIKE_SWEEP_UNITS (true)
// Skip barb melee units if they are inside a camp.
#define MOD_CP_FIND_STRIKE_UNITS_SKIP_BARBS_IN_CAMPS (true)
// Effectively skip ranged units if the parameter of no ranged units is set.
#define MOD_AI_SMART_FIND_STRIKE_UNITS_SKIP_RANGED (true) 
// Allow to add ranged units that are in a move + attack range.
#define MOD_AI_SMART_FIND_STRIKE_UNITS_RANGED_IN_MOVE_ATTACK_RANGE (true) 
// Function that fills a specific air unit array with air units eligible to air sweep against interceptors.
#ifdef MOD_AI_SMART_FIND_STRIKE_SWEEP_UNITS
#define MOD_AI_SMART_FIND_AIR_UNITS_TO_AIR_SWEEP (true)
#endif
// Changes to interceptions, based on nearby air units.
#define MOD_AI_SMART_PLOT_AIRCRAFT_INTERCEPTIONS (true)
// Function to check if a plot is in a vector of plots.
#if defined(MOD_AI_SMART_EXECUTE_AIRCRAFT_INTERCEPTIONS) || defined(MOD_AI_SMART_PLOT_AIRCRAFT_INTERCEPTIONS)
#define MOD_AI_SMART_SAME_PLOT_FOUND (true)
#endif
// On damage computation, any ranged unit out of pure range but in range + move will count as half damage (still don't know)
#define MOD_AI_SMART_COMPUTE_DAMAGE_FAR_RANGED_DAMAGE_HALVED (true)
// Skip this action, as air sweeps will be sent on air attacks.
#define MOD_AI_SMART_SKIP_PLOT_AIR_SWEEP_MOVES (true)
// Current air units vector filled with 'FindAirUnitsToAirSweep', and used later for air sweep missions.
#if defined(MOD_AI_SMART_FIND_AIR_UNITS_TO_AIR_SWEEP) || defined(MOD_AI_SMART_EXECUTE_ATTACK_SEND_AIR_SWEEPS)
#define MOD_AI_SMART_CURRENT_AIR_UNITS_VECTOR (true)
#endif
// Added plot distance in the FindClosestUnit function, so it will be sorted first by turns to target, next by distance.
#define MOD_AI_SMART_FIND_CLOSEST_UNIT (true) 
// Reworked ExecuteFlankAttack function to assign moving units around target scored by possible units to reach in turn.
#define MOD_AI_SMART_EXECUTE_FLANK_ATTACK (true) 

// CvMilitaryAI
//--------------
// AI will not 'need' carriers also if carriers surpass 25% of the cuantity of all ships).
#define MOD_AI_SMART_NEED_CARRIERS_SANITY (true)
// Aircraft won't rebase on more damaged carrier/city than before. Aircraft will check interceptions at range before consider rebasing.
#define MOD_AI_SMART_AIRCRAFT_WILL_REBASE (true)
// Function to check out the max possible interceptions that can be made on a specific plot.
#ifdef MOD_AI_SMART_FIND_AIR_UNITS_TO_AIR_SWEEP
#define MOD_AI_SMART_GET_MAX_POSSIBLE_INTERCEPTIONS (true)
#endif
// Reworked function to allow to check range from the parameter (was fixed at 10 ignoring parameter)
#define MOD_AI_SMART_NUM_ENEMY_AIR_UNITS_IN_RANGE (true)

// CvDangerPlots
//---------------
// When assigning danger to plots, will take into account ranged units properly, and will substract distance value between plots.
#define MOD_AI_SMART_ASSIGN_DANGER (true)

// CvUnit
//--------
// Promotions are scored chosen in a more random fashion, still prioritizing on better promotions and promotion chains.
#define MOD_AI_SMART_PROMOTION_VALUE (true)
// function to retrieve a vector of free plots for move and fire
#if defined(MOD_AI_SMART_ASSIGN_DANGER) || defined(MOD_AI_SMART_GET_BEST_REPOSITION_PLOT)
#define MOD_AI_GET_MOVABLE_PLOT_LIST (true)
#endif
// Get Value of range + move from a unit.
#if defined (MOD_AI_SMART_ASSIGN_DANGER) || defined(MOD_AI_SMART_FIND_STRIKE_UNITS_RANGED_IN_MOVE_ATTACK_RANGE)
#define MOD_AI_SMART_RANGE_PLUS_MOVE_TO_SHOT (true)
#endif
// Alter function parameters to allow to check this from a plot other than unit current plot.
#define MOD_AI_SMART_CAN_EVER_RANGE_STRIKE_AT (true)
// Function to check out nearby enemy units / interceptors based on range.
#if defined(MOD_AI_SMART_EXECUTE_AIRCRAFT_REBASE) || defined(MOD_AI_SMART_AIRCRAFT_WILL_REBASE)
#define MOD_AI_SMART_ENEMY_SCORE_AT_RANGE (true)
#endif

// CvDealAI
//----------
// AI will not propose obsolete/no value items as part of a deal
#define MOD_AI_SMART_TRADE_NO_ZERO_VALUE_ITEMS (true)

// CvTacticalAnalisysMap
//-----------------------
// Count not visible units as half strength when assigning zone unit strength.
#define MOD_CP_NOT_VISIBLE_UNITS_LESS_STRENGTH (true)
// Only add strength of 'enemy' city if at enemy territory zone.
#define MOD_CP_COUNT_ENEMY_CITY_ONLY_ENEMY_TERRITORY (true)
// Always add strength of unit if it is ranged, despite is not at it's domain.
#define MOD_CP_COUNT_RANGED_DESPITE_DOMAIN (true)
// Start adding less strength value due to distance starting at 4 distance.
#define MOD_CP_DISCOUNT_DISTANCE_AT_4_RANGE (true)

//----------------------------

// help to log what's happening
#define MOD_AI_SMART_LOGS                           (true)

#endif

#endif
