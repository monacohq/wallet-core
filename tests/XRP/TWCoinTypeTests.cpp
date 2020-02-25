// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWXRPCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeRipple));
    auto txId = TWStringCreateWithUTF8Bytes("E26AB8F3372D2FC02DEC1FD5674ADAB762D684BFFDBBDF5D674E9D7CF4A47054");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeRipple, txId));
    auto accId = TWStringCreateWithUTF8Bytes("rfkH7EuS1XcSkB9pocy1R6T8F4CsNYixYU");
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeRipple, accId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeRipple));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeRipple));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeRipple), 6);
    ASSERT_EQ(TWBlockchainRipple, TWCoinTypeBlockchain(TWCoinTypeRipple));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeRipple));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeRipple));
    assertStringsEqual(symbol, "XRP");
    assertStringsEqual(txUrl, "https://bithomp.com/explorer/E26AB8F3372D2FC02DEC1FD5674ADAB762D684BFFDBBDF5D674E9D7CF4A47054");
    assertStringsEqual(accUrl, "https://bithomp.com/explorer/rfkH7EuS1XcSkB9pocy1R6T8F4CsNYixYU");
    assertStringsEqual(id, "XRP");
    assertStringsEqual(name, "Ripple");
}