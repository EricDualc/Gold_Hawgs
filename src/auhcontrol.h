// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2017 The AUH developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with AuhGate.
 */
#ifndef BITCOIN_AUHCONTROL_H
#define BITCOIN_AUHCONTROL_H

#include <string>

#include <boost/function.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/thread.hpp>

extern const std::string DEFAULT_AUH_CONTROL;
static const bool DEFAULT_LISTEN_ONION = true;

void StartAuhControl(boost::thread_group& threadGroup);
void InterruptAuhControl();
void StopAuhControl();

#endif /* BITCOIN_AUHCONTROL_H */


