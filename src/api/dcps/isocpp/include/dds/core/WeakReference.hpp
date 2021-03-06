/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR PrismTech
 *   Limited, its affiliated companies and licensors. All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef OSPL_DDS_CORE_WEAKREFERENCE_HPP_
#define OSPL_DDS_CORE_WEAKREFERENCE_HPP_

/**
 * @file
 */

/*
 * OMG PSM class declaration
 */
#include <spec/dds/core/WeakReference.hpp>

// Implementation
namespace dds
{
namespace core
{

template <typename T>
WeakReference<T>::WeakReference() { }

template <typename T>
WeakReference<T>::WeakReference(const T& t) : impl_(t.delegate()) { }

template <typename T>
WeakReference<T>::~WeakReference() { }

template <typename T>
bool WeakReference<T>::expired()
{
    return impl_.expired();
}

template <typename T>
T WeakReference<T>::lock()
{
    return T(impl_.lock());
}
}
}
// End of implementation

#endif /* OSPL_DDS_CORE_WEAKREFERENCE_HPP_ */
