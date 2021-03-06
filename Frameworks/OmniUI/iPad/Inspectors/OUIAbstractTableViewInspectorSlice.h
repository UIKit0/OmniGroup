// Copyright 2010-2013 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniUI/OUIInspectorSlice.h>

// This doesn't implement UITableViewDataSource or UITableViewDelegate, but assumes subclasses will.

@interface OUIAbstractTableViewInspectorSlice : OUIInspectorSlice
@property(strong,readonly,nonatomic) UITableView *tableView;
@end
