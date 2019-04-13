////////////////////////////////////////////////////////////////////////////////
///
/// @file       bcm5719_APE.cpp
///
/// @project    bcm5719
///
/// @brief      bcm5719_APE
///
////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
///
/// @copyright Copyright (c) 2018, Evan Lojewski
/// @cond
///
/// All rights reserved.
///
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions are met:
/// 1. Redistributions of source code must retain the above copyright notice,
/// this list of conditions and the following disclaimer.
/// 2. Redistributions in binary form must reproduce the above copyright notice,
/// this list of conditions and the following disclaimer in the documentation
/// and/or other materials provided with the distribution.
/// 3. Neither the name of the <organization> nor the
/// names of its contributors may be used to endorse or promote products
/// derived from this software without specific prior written permission.
///
////////////////////////////////////////////////////////////////////////////////
///
/// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
/// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
/// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
/// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
/// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
/// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
/// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
/// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
/// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
/// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
/// POSSIBILITY OF SUCH DAMAGE.
/// @endcond
////////////////////////////////////////////////////////////////////////////////

#include <bcm5719_APE.h>

APE_t APE;

void init_bcm5719_APE(void)
{
    /** @brief Component Registers for @ref APE. */
    /** @brief Bitmap for @ref APE_t.Mode. */

    /** @brief Bitmap for @ref APE_t.Status. */

    /** @brief Bitmap for @ref APE_t.GpioMessage. */

    /** @brief Bitmap for @ref APE_t.Event. */

    /** @brief Bitmap for @ref APE_t.RxbufoffsetFunc0. */

    /** @brief Bitmap for @ref APE_t.RxbufoffsetFunc1. */

    /** @brief Bitmap for @ref APE_t.TxToNetDoorbellFunc0. */

    /** @brief Bitmap for @ref APE_t.Mode2. */

    /** @brief Bitmap for @ref APE_t.Status2. */

    /** @brief Bitmap for @ref APE_t.LockGrantObsolete. */

    /** @brief Bitmap for @ref APE_t.RxPoolModeStatus0. */

    /** @brief Bitmap for @ref APE_t.RxPoolModeStatus1. */

    /** @brief Bitmap for @ref APE_t.RxPoolRetire0. */

    /** @brief Bitmap for @ref APE_t.RxPoolRetire1. */

    /** @brief Bitmap for @ref APE_t.TxToNetPoolModeStatus0. */

    /** @brief Bitmap for @ref APE_t.TxToNetBufferAllocator0. */

    /** @brief Bitmap for @ref APE_t.Tick1mhz. */

    /** @brief Bitmap for @ref APE_t.Tick1khz. */

    /** @brief Bitmap for @ref APE_t.Tick10hz. */

    /** @brief Bitmap for @ref APE_t.Gpio. */

    /** @brief Bitmap for @ref APE_t.Gint. */

    /** @brief Bitmap for @ref APE_t.OtpControl. */

    /** @brief Bitmap for @ref APE_t.OtpStatus. */

    /** @brief Bitmap for @ref APE_t.OtpAddr. */

    /** @brief Bitmap for @ref APE_t.OtpReadData. */

    /** @brief Bitmap for @ref APE_t.CpuStatus. */

    /** @brief Bitmap for @ref APE_t.TxToNetPoolModeStatus1. */

    /** @brief Bitmap for @ref APE_t.TxToNetBufferAllocator1. */

    /** @brief Bitmap for @ref APE_t.TxToNetDoorbellFunc1. */

    /** @brief Bitmap for @ref APE_t.RxbufoffsetFunc2. */

    /** @brief Bitmap for @ref APE_t.TxToNetDoorbellFunc2. */

    /** @brief Bitmap for @ref APE_t.RxPoolModeStatus2. */

    /** @brief Bitmap for @ref APE_t.RxPoolRetire2. */

    /** @brief Bitmap for @ref APE_t.TxToNetPoolModeStatus2. */

    /** @brief Bitmap for @ref APE_t.TxToNetBufferAllocator2. */

    /** @brief Bitmap for @ref APE_t.RxbufoffsetFunc3. */

    /** @brief Bitmap for @ref APE_t.TxToNetDoorbellFunc3. */

    /** @brief Bitmap for @ref APE_t.RxPoolModeStatus3. */

    /** @brief Bitmap for @ref APE_t.RxPoolRetire3. */

    /** @brief Bitmap for @ref APE_t.TxToNetPoolModeStatus3. */

    /** @brief Bitmap for @ref APE_t.TxToNetBufferAllocator3. */

    /** @brief Bitmap for @ref APE_t.BmcToNcRxStatus. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacHigh. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacLow. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch0High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch0Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch1High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch1Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch2High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch2Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch3High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch3Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch4High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch4Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch5High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch5Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch6High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch6Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch7High. */

    /** @brief Bitmap for @ref APE_t.BmcToNcSourceMacMatch7Low. */

    /** @brief Bitmap for @ref APE_t.BmcToNcRxVlan. */

    /** @brief Bitmap for @ref APE_t.BmcToNcReadBuffer. */

    /** @brief Bitmap for @ref APE_t.BmcToNcRxControl. */

    /** @brief Bitmap for @ref APE_t.BmcToNcTxStatus. */

    /** @brief Bitmap for @ref APE_t.BmcToNcTxControl. */

    /** @brief Bitmap for @ref APE_t.BmcToNcTxBuffer. */

    /** @brief Bitmap for @ref APE_t.BmcToNcTxBufferLast. */

    /** @brief Bitmap for @ref APE_t.RmuControl. */

    /** @brief Bitmap for @ref APE_t.ArbControl. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestPhy0. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestGrc. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestPhy1. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestPhy2. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestMem. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestPhy3. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestPort6. */

    /** @brief Bitmap for @ref APE_t.PerLockRequestGpio. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantPhy0. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantGrc. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantPhy1. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantPhy2. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantMem. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantPhy3. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantPort6. */

    /** @brief Bitmap for @ref APE_t.PerLockGrantGpio. */


}
