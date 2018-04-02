//*********************************************************  

//  

// Copyright (c) Microsoft. All rights reserved.  

// This code is licensed under the MIT License (MIT).  

// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF  

// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY  

// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR  

// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.  

//  

//*********************************************************  

using SDKTemplate;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;

namespace BrokeredComponent_App
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class SystemDataScenario
    {
        // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
        // as NotifyUser()
        MainPage rootPage = MainPage.Current;

        public SystemDataScenario()
        {
            this.InitializeComponent();
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
        }

        /// <summary>
        /// This is the click handler for the 'RetrieveData' button.  
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private async void RetrieveDataButton_Click(object sender, RoutedEventArgs e)
        {
            Button b = sender as Button;
            if (b != null)
            {
                var results = await RetrieveDataAsync();
                var observableList = new ObservableCollection<string>(results);
                DataResultsList.ItemsSource = observableList;     // data bind
           }
        }

        /// <summary>
        /// uses a background thread to query the desktop server for a set of (simulated) data base results.
        /// Note that the string results are bulk transferred from the desktop server via an array.
        /// This avoids the expense of repeated cross-process calls for each individual result.  
        /// </summary>
        /// <returns></returns>
        private IAsyncOperation<string[]> RetrieveDataAsync()
        {
            return Task<string[]>.Run( () =>
            {
                return App.Server.RetrieveData();
            }).AsAsyncOperation<string[]>();
        }
    }
}
